// Nesting.cpp
#include "Nesting.h"
#include <functional>
#include <list>

namespace Nesting {

typedef std::function<bool(std::string::const_iterator& it, std::string::const_iterator end)> Parser;

Parser one(char ch) {
  return [ch] (std::string::const_iterator& it, std::string::const_iterator end) {
    if (it != end) {
      if (*it == ch) {
        return (++it, true);
      }
    }
    return false;
  };
}

Parser seq(const std::list<Parser>& parsers) {
  return [parsers] (std::string::const_iterator& it, std::string::const_iterator end) {
    std::string::const_iterator backup = it;
    for (auto& p : parsers) {
      if (!p(it, end)) {
        return (it = backup, false);
      }
    }
    return true;
  };
}

Parser sor(const std::list<Parser>& parsers) {
  return [parsers] (std::string::const_iterator& it, std::string::const_iterator end) {
    for (auto& p : parsers) {
      if (p(it, end)) {
        return true;
      }
    }
    return false;
  };
}

Parser star(Parser parser) {
  return [parser] (std::string::const_iterator& it, std::string::const_iterator end) {
    while (it != end) {
      if (!parser(it, end)) {
        break;
      }
    }
    return true;
  };
}

Parser ref(Parser& parser) {
  return [&parser] (std::string::const_iterator& it, std::string::const_iterator end) {
    return parser(it, end);
  };
}

bool parse(const std::string& str, Parser p) {
  std::string::const_iterator it = str.begin();
  return p(it, str.end()) && (it == str.end());
}

int solution(std::string &S) {
  Parser brackets_parser;
  Parser round_brackets_parser = seq({one('('), ref(brackets_parser), one(')')});
  brackets_parser = star(round_brackets_parser);
  return parse(S, brackets_parser) ? 1 : 0;
}

} // namespace
