#include "gdexample.h"
#include "gdregistersignal.h"

// Note that we are not using the godot namespace here,
// since the three functions implemented here need to be defined without a namespace.

// Called when godot loads our plugin.
extern "C" void GDN_EXPORT godot_gdnative_init(godot_gdnative_init_options *o)
{
    // All we're doing here is parse through the functions in our bindings module to initialize them,
    // but you might have to set up more things depending on your needs.
    godot::Godot::gdnative_init(o);
}

// Called when godot unloads our plugin.
extern "C" void GDN_EXPORT godot_gdnative_terminate(godot_gdnative_terminate_options *o)
{
    godot::Godot::gdnative_terminate(o);
}

extern "C" void GDN_EXPORT godot_nativescript_init(void *handle)
{
    // This function does the "usual stuff".
    godot::Godot::nativescript_init(handle);

    // Tells Godot about all the NativeScripts in our GDNative plugin here.
    godot::register_class<godot::GDExample>();
    godot::register_class<godot::GDRegisterSignal>();
}
