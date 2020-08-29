#ifndef GDREGISTERSIGNAL_H
#define GDREGISTERSIGNAL_H

#include <Godot.hpp>
#include <Node.hpp>

namespace godot
{
    class GDRegisterSignal : public Node
    {
        GODOT_CLASS(GDRegisterSignal, Node)
    public:
        static void _register_methods();
        void _init(); // our initializer called by Godot
        void _ready();

        GDRegisterSignal();
        ~GDRegisterSignal();

        void _on_position_changed(Node *node, Vector2 new_pos);

    };
} // namespace godot

#endif