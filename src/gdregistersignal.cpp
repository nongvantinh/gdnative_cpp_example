#include "gdregistersignal.h"

using namespace godot;

void GDRegisterSignal::_register_methods()
{
    register_method("_init", &GDRegisterSignal::_init);
    register_method("_ready", &GDRegisterSignal::_ready);
    register_method("_on_position_changed", &GDRegisterSignal::_on_position_changed);
}

void GDRegisterSignal::_init()
{
}

void GDRegisterSignal::_ready()
{
    get_child(0)->connect("position_changed", this, "_on_position_changed");
}

GDRegisterSignal::GDRegisterSignal()
{
}

GDRegisterSignal::~GDRegisterSignal()
{
}

void GDRegisterSignal::_on_position_changed(Node *node, Vector2 new_pos)
{
    Godot::print(node->get_name() + new_pos);
}