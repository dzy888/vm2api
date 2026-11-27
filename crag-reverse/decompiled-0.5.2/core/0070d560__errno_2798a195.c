// 0070d560 errno

/* errno[feeba2d9a393e01a]::errno */

undefined4 __rustcall errno[feeba2d9a393e01a]::errno(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)PTR___errno_location_007990a0)();
  return *puVar1;
}


