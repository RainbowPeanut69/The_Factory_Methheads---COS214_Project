#include "VacuumMerlinEngine.h"
using namespace std;

VacuumMerlinEngine::VacuumMerlinEngine()
{

}

VacuumMerlinEngine::~VacuumMerlinEngine()
{

}

void VacuumMerlinEngine::print()
{
    cout << "Vacuum Merlin Engine";
}

string VacuumMerlinEngine::getName() {
    return "Vacuum Merlin Engine";
}

void VacuumMerlinEngine::add(RocketPart* r) {}

void VacuumMerlinEngine::remove(RocketPart* r) {}