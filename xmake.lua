add_rules("mode.debug", "mode.release")

set_warnings("everything")

target("Test-Causal")
set_kind("binary")
set_default(true)

add_includedirs("Include", "Include/CausalModel")
add_files("Src/Test-Causal/**.cpp")

add_files("Src/CausalModel/**.cpp")
add_includedirs("Include", "Include/CausalModel", "Include/CausalModel/Funcs", "Include/CausalModel/Types")

if is_mode("debug") then
	set_symbols("debug")
	set_optimize("none")
	add_defines("TEST_MODE")
end

target_end()

on_clean(function(target)
	os.exec("rm -rf build")
end)
