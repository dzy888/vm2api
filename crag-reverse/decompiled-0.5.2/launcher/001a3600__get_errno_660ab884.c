// 001a3600 get_errno

/* getrandom[6c7f7f5c828d4481]::backends::use_file::utils::get_errno::get_errno */

undefined4 __rustcall
getrandom[6c7f7f5c828d4481]::backends::use_file::utils::get_errno::get_errno(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)PTR___errno_location_00219f18)();
  return *puVar1;
}


