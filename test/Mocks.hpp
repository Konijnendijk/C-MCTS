
#ifndef CPP_MCTS_MOCKS_HPP
#define CPP_MCTS_MOCKS_HPP

#include "mcts/mcts.hpp"

class MockState : public State {
};

class MockAction : public Action<MockState> {
    void execute(MockState& state) override
    {
        // Mock action, stub implementation
    }
};

class MockExpansionStrategy : public ExpansionStrategy<MockState, MockAction> {
    using ExpansionStrategy<MockState, MockAction>::ExpansionStrategy;

    MockAction generateNext() override { return MockAction(); }

    bool canGenerateNext() const override { return false; }
};

#endif // CPP_MCTS_MOCKS_HPP
