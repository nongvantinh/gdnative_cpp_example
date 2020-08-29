#ifndef GDEXAMPLE_H
#define GDEXAMPLE_H

#include <Godot.hpp> // Contains all our basic definitions.
#include <Sprite.hpp> // Contains bindings to the Sprite class. We'll be extending this class in our module.

namespace godot // Everything in GDNative is defined within this namespace.
{

    class GDExample : public Sprite
    {
        // The GODOT_CLASS macro sets up a few internal things for us.
        GODOT_CLASS(GDExample, Sprite)

    public:
        // Static function that Godot will call to find out which methods can be called on our NativeScript and which properties it exposes.
        static void _register_methods();
        // Called after Godot has properly set up our object. It has to exist even if you don't place any code in it.
        void _init();

        void _ready();
        void _process(float delta);

        void set_speed(float p_speed);
        float get_speed();

        GDExample();
        ~GDExample();

    private:
        float time_passed;
        float time_emit;
        float amplitude;
        float speed;
    };

} // namespace godot

#endif
