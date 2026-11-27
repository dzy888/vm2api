// 0070d570 set_errno

/* errno[feeba2d9a393e01a]::set_errno */

void __rustcall errno[feeba2d9a393e01a]::set_errno(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)PTR___errno_location_007990a0)();
  *puVar1 = param_1;
  return;
}


