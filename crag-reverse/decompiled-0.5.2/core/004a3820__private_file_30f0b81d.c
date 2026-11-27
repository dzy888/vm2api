// 004a3820 private_file

/* WARNING: Removing unreachable block (ram,0x004a38aa) */
/* craggemini_core[66f3c71560d70857]::private_file */

undefined4 * __rustcall
craggemini_core[66f3c71560d70857]::private_file
          (undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined8 uVar7;
  int local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  longlong local_a8;
  uint local_a0;
  int local_9c;
  
  (*(code *)PTR__open_00799768)(param_3,param_2);
  if (local_e8 == 1) {
    *(undefined8 *)(param_1 + 2) = local_e0;
    *param_1 = 1;
  }
  else {
    (*(code *)PTR_metadata_00799b30)();
    if (((((local_a0 & 0xf000) == 0x8000) &&
         (iVar5 = (*(code *)PTR_geteuid_007992d8)(), (local_a0 & 0xfff) == 0x180)) &&
        (local_a8 == 1)) && (local_9c == iVar5)) {
      param_1[1] = local_e4;
      *param_1 = 0;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar6 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      uVar7 = s_00_regular_files_00196453._8_8_;
      if (pcVar6 == (char *)0x0) {
        (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      *(ulonglong *)(pcVar6 + 0x2a) =
           CONCAT26(s_00_regular_files_00196453._6_2_,s_00_regular_files_00196453._0_6_);
      *(undefined8 *)(pcVar6 + 0x32) = uVar7;
      uVar7 = CONCAT62(s_00_regular_files_00196453._0_6_,s_e_owned_06_00196449._8_2_);
      *(undefined8 *)(pcVar6 + 0x20) = s_e_owned_06_00196449._0_8_;
      *(undefined8 *)(pcVar6 + 0x28) = uVar7;
      uVar7 = s_d_journal_must_b_00196439._8_8_;
      *(undefined8 *)(pcVar6 + 0x10) = s_d_journal_must_b_00196439._0_8_;
      *(undefined8 *)(pcVar6 + 0x18) = uVar7;
      uVar4 = s_configuration_an_00196429._12_4_;
      uVar3 = s_configuration_an_00196429._8_4_;
      uVar2 = s_configuration_an_00196429._4_4_;
      *(undefined4 *)pcVar6 = s_configuration_an_00196429._0_4_;
      *(undefined4 *)(pcVar6 + 4) = uVar2;
      *(undefined4 *)(pcVar6 + 8) = uVar3;
      *(undefined4 *)(pcVar6 + 0xc) = uVar4;
      uVar7 = (*(code *)PTR_<alloc[12e961f32105355]::string::String>_00799238)();
      *(undefined8 *)(param_1 + 2) = uVar7;
      *param_1 = 1;
      (*(code *)PTR_close_00799030)();
    }
  }
  return param_1;
}


