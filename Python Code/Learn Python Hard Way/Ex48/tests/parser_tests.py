from nose.tools import *
from Ex48.lexicon import *
from Ex48.parser import *


def test():
    sentence = scan("run in north")
    answer = parse_sentence(sentence)
    assert_equal(answer.subject, "player")
    assert_equal(answer.verb, "run")
    assert_equal(answer.object, "north")

def test2():
    answer = parse_sentence(scan("princess eat the bear"))
    assert_equal(answer.subject, "princess")
    assert_equal(answer.verb, "eat")
    assert_equal(answer.object, "bear")