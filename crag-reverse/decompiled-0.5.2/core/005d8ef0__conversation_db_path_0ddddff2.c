// 005d8ef0 conversation_db_path

/* craggemini_core[66f3c71560d70857]::acp_backend::conversation_db_path */

void __rustcall
craggemini_core[66f3c71560d70857]::acp_backend::conversation_db_path
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
          longlong param_5)

{
  byte bVar1;
  undefined *puVar2;
  char cVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  
  if (0xffffffffffffff7f < param_5 - 0x81U) {
    lVar4 = 0;
    do {
      bVar1 = *(byte *)(param_4 + lVar4);
      if (((9 < (byte)(bVar1 - 0x30)) && (0x19 < (byte)((bVar1 & 0xdf) + 0xbf))) &&
         ((0x32 < bVar1 - 0x2d ||
          ((0x4000000000003U >> ((ulonglong)(bVar1 - 0x2d) & 0x3f) & 1) == 0)))) goto LAB_005d8f8b;
      lVar4 = lVar4 + 1;
    } while (param_5 != lVar4);
    local_40 = param_4;
    local_38 = param_5;
    cVar3 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                      (&DAT_0019e771,2,param_4,param_5);
    puVar2 = PTR__join_00799210;
    if (cVar3 == '\0') {
      (*(code *)PTR__join_00799210)(&DAT_0019e773,param_3,7);
      (*(code *)puVar2)(&DAT_0019e77a,local_60,0xf);
      uVar5 = (*(code *)PTR__join_00799210)(&DAT_0019e789,local_78,0xd);
      local_b8 = &local_40;
      uStack_b0 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
      (*(code *)PTR_format_inner_00799048)(uVar5,&local_b8);
      uVar5 = (*(code *)PTR__join_00799210)(local_50,local_90,local_48);
      if (local_58 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar5,1);
      }
      param_1[2] = local_a8;
      *(undefined4 *)param_1 = (undefined4)local_b8;
      *(undefined4 *)((longlong)param_1 + 4) = local_b8._4_4_;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_b0;
      *(undefined4 *)((longlong)param_1 + 0xc) = uStack_b0._4_4_;
      uVar5 = (undefined4)local_b8;
      if (local_a0 != 0) {
        uVar5 = (*(code *)PTR___rust_dealloc_00798fc8)((undefined4)local_b8,1);
      }
      if (local_88 != 0) {
        uVar5 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar5,1);
      }
      if (local_70 == 0) {
        return;
      }
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar5,1);
      return;
    }
  }
LAB_005d8f8b:
  *param_1 = 0xffffffffffffffff;
  return;
}


