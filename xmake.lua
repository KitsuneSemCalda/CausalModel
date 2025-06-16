add_rules("mode.debug", "mode.release")

target("CausalModel")
set_kind("shared")

add_files("Src/CausalModel/**.cpp")
add_includedirs("Include/CausalModel")
set_warnings("everything")

if is_mode("debug") then
	set_symbols("debug")
	set_optimize("none")
end
target_end()

target("Test-Causal")
set_kind("binary")
set_default(true)

add_deps("CausalModel")

add_files("Src/Test-Causal/**.cpp")

if is_mode("debug") then
	set_symbols("debug")
	set_optimize("none")
end

target_end()

on_clean(function(target)
	os.exec("rm -rf build")
end)
