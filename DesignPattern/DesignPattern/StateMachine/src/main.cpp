#include <boost/statechart/event.hpp>
#include <boost/statechart/state_machine.hpp>
#include <boost/statechart/simple_state.hpp>
#include <boost/statechart/transition.hpp>
#include <boost/statechart/custom_reaction.hpp>
#include <iostream>
using namespace std;
namespace sc = boost::statechart;

struct event_MoveToSecondState : sc::event<event_MoveToSecondState> {};
struct event_MoveToFirstState : sc::event<event_MoveToFirstState> {};

struct firstState;
struct secondState;
// State Machine need to know starting state
struct statemachine : sc::state_machine<statemachine, firstState> {
    statemachine() { cout << "Starting => statemachine" << endl; }
    
};
// Starting state needs to know which state machine it belongs to
// 1st State
struct firstState : sc::simple_state<firstState, statemachine>
{
	firstState() { cout << "In State => firstState" << endl; }
    typedef sc::transition<event_MoveToSecondState, secondState> reactions;
};
// 2nd State
struct secondState : sc::simple_state<secondState, statemachine>
{
	secondState() { cout << "In State => secondState" << endl; }
    typedef sc::transition<event_MoveToFirstState, firstState> reactions;
};

int main()
{
    statemachine sm;
	sm.initiate();
    sm.process_event(event_MoveToSecondState());
    return 0;
}