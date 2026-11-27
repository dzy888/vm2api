// 004d1be0 refresh_slot_auth_files

/* craggemini_core[66f3c71560d70857]::pool::refresh_slot_auth_files */

void __rustcall
craggemini_core[66f3c71560d70857]::pool::refresh_slot_auth_files
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulonglong uVar2;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_60;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_38;
  
  puVar1 = PTR__join_00799210;
  (*(code *)PTR__join_00799210)(".gemini",param_2,7);
  (*(code *)puVar1)("antigravity-cli",local_98,0xf);
  if (local_a8 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  (*(code *)PTR__join_00799210)(".gemini",param_4,7);
  (*(code *)PTR__join_00799210)("antigravity-cli",local_98,0xf);
  if (local_a8 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  (*(code *)PTR__join_00799210)("antigravity-oauth-token",local_50,0x17);
  (*(code *)PTR__join_00799210)("antigravity-oauth-token",local_38,0x17);
  uVar2 = copy_private_regular_file(local_80,local_78,local_a0,local_98,1);
  if (uVar2 != 0) {
    if ((1 < ((uint)uVar2 & 3) - 2) && ((uVar2 & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
  }
  if (local_a8 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (local_88 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  (*(code *)PTR__join_00799210)("cache/default_project_id.txt",local_50,0x1c);
  (*(code *)PTR__join_00799210)("cache/default_project_id.txt",local_38,0x1c);
  uVar2 = copy_private_regular_file(local_80,local_78,local_a0,local_98,1);
  if (uVar2 != 0) {
    if ((1 < ((uint)uVar2 & 3) - 2) && ((uVar2 & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
  }
  if (local_a8 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (local_88 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (local_48 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (local_60 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  return;
}


