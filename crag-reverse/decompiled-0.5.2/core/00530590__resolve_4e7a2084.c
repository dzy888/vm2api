// 00530590 resolve

/* <craggemini_core[66f3c71560d70857]::resume::SessionStore>::resolve */

undefined8 __rustcall
<craggemini_core[66f3c71560d70857]::resume::SessionStore>::resolve
          (undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
          undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
          undefined8 param_9,undefined8 param_10)

{
  bool bVar1;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined1 local_37;
  undefined2 local_36;
  
  if (*(longlong *)(param_2 + 0x60) == -1) {
    bVar1 = true;
    local_80 = -1;
    local_48 = 0;
    local_70 = param_4;
  }
  else {
    (*(code *)PTR_clone_00798fd0)(param_4,param_10,param_8,param_9);
    bVar1 = local_80 == -1;
    local_48 = 0;
    if (!bVar1) {
      local_48 = local_78;
    }
  }
  local_36 = 0x100;
  local_58 = 0;
  local_68 = param_3;
  local_60 = param_4;
  local_40 = local_70;
  local_38 = param_5;
  local_37 = param_6;
  resolve_with_options(param_1,param_2,&local_68,param_7,param_8,param_9,param_10);
  if (!(bool)(bVar1 | local_80 == 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  return param_1;
}


