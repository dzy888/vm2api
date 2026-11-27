// 004cccf0 dir_size_bytes

/* craggemini_core[66f3c71560d70857]::pool::dir_size_bytes */

ulonglong __rustcall
craggemini_core[66f3c71560d70857]::pool::dir_size_bytes
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar6;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  longlong *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined8 local_f0;
  longlong *local_e0;
  longlong *local_d8;
  undefined8 local_b0;
  uint local_a8;
  ulonglong local_90;
  longlong *local_80;
  char local_78;
  
  (*(code *)PTR_symlink_metadata_007992d0)(param_4,param_2);
  if ((int)local_e0 == 2) {
    plVar2 = local_d8;
  }
  else {
    if (SBORROW2(0,(short)(local_a8 & 0xf000))) {
      return local_90;
    }
    if ((local_a8 & 0xf000) != 0x4000) {
      return 0;
    }
    (*(code *)PTR_read_dir_00799ad0)(0xc000,param_2);
    plVar2 = local_e0;
    puVar1 = PTR_next_00799b88;
    if ((char)local_d8 != '\x02') {
      local_e0 = (longlong *)0x0;
      local_b0 = 0;
      local_80 = plVar2;
      local_78 = (char)local_d8;
      uVar4 = 0;
      do {
        (*(code *)puVar1)();
        if (local_118 == (longlong *)0x0) {
          if (local_78 != '\x02') {
            LOCK();
            *local_80 = *local_80 + -1;
            UNLOCK();
            if (*local_80 == 0) {
              (*(code *)PTR_drop_slow_007997d0)();
            }
          }
          local_78 = '\x02';
          local_148 = CONCAT44(uStack_fc,uStack_100);
          local_158 = (longlong *)CONCAT44(uStack_10c,uStack_110);
          uStack_150 = CONCAT44(uStack_104,uStack_108);
          uStack_140 = uStack_f8;
          if (local_118 != (longlong *)0x1) break;
        }
        else {
          local_158 = (longlong *)CONCAT44(uStack_10c,uStack_110);
          uStack_150 = CONCAT44(uStack_104,uStack_108);
          local_148 = CONCAT44(uStack_fc,uStack_100);
          uStack_140 = uStack_f8;
        }
        local_118 = local_158;
        uStack_110 = (undefined4)uStack_150;
        uStack_10c = uStack_150._4_4_;
        uStack_f8 = local_f0;
        uStack_108 = (undefined4)local_148;
        uStack_104 = local_148._4_4_;
        uStack_100 = (undefined4)uStack_140;
        uStack_fc = uStack_140._4_4_;
        if (local_158 == (longlong *)0x0) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
          <core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::fs::DirEntry,core[c0acaeba6ab4c2e0]::io::error::Error>>
                    (&local_118,&local_80);
        }
        else {
          (*(code *)PTR_path_00799b98)();
          uVar3 = dir_size_bytes(uStack_150,local_148);
          bVar5 = CARRY8(uVar4,uVar3);
          uVar4 = uVar4 + uVar3;
          if (bVar5) {
            uVar4 = 0xffffffffffffffff;
          }
          uVar6 = extraout_XMM0_Da;
          if (local_158 != (longlong *)0x0) {
            uVar6 = (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da,1);
          }
          LOCK();
          *local_118 = *local_118 + -1;
          UNLOCK();
          if (*local_118 == 0) {
            uVar6 = (*(code *)PTR_drop_slow_007997d0)();
          }
          *(undefined1 *)CONCAT44(uStack_10c,uStack_110) = 0;
          if (CONCAT44(uStack_104,uStack_108) != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar6,1);
          }
        }
      } while (local_78 != '\x02');
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <core[c0acaeba6ab4c2e0]::iter::adapters::flatten::Flatten<std[6c98fd8553dbae28]::fs::ReadDir>>
                (&local_e0);
      if ((char)local_d8 != '\x02') {
        return uVar4;
      }
      if (((uint)plVar2 & 3) - 2 < 2) {
        return uVar4;
      }
      if (((ulonglong)plVar2 & 3) == 0) {
        return uVar4;
      }
      local_d8 = (longlong *)((longlong)plVar2 + -1);
      local_e0 = (longlong *)CONCAT71(local_e0._1_7_,3);
      (*(code *)PTR_drop_00799040)();
      return uVar4;
    }
  }
  if ((1 < ((uint)plVar2 & 3) - 2) && (((ulonglong)plVar2 & 3) != 0)) {
    local_d8 = (longlong *)((longlong)plVar2 + -1);
    local_e0 = (longlong *)CONCAT71(local_e0._1_7_,3);
    (*(code *)PTR_drop_00799040)();
  }
  return 0;
}


