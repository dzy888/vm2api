// 00160c50 <alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::path::PathBuf,std[6c98fd8553dbae28]::path::PathBuf>

/* <craggemini[b21da2d71f2da7a3]::license::LicenseGate>::new::<alloc[12e961f32105355]::string::String,
   std[6c98fd8553dbae28]::path::PathBuf, std[6c98fd8553dbae28]::path::PathBuf> */

undefined8 __rustcall
<craggemini[b21da2d71f2da7a3]::license::LicenseGate>::new::
<alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::path::PathBuf,std[6c98fd8553dbae28]::path::PathBuf>
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined1 local_6a;
  undefined4 local_69;
  undefined4 uStack_65;
  undefined4 uStack_61;
  undefined4 uStack_5d;
  undefined8 local_59;
  undefined8 uStack_51;
  char local_49;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
  local_80 = (undefined8 *)(*(code *)PTR___rust_alloc_00219c88)();
  if (local_80 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_error_00219c78)();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  *(undefined8 *)((longlong)local_80 + 7) = 0x64692d656e696863;
  *local_80 = 0x63616d2f6374652f;
  local_88 = 0xf;
  local_78 = 0xf;
  craggemini[b21da2d71f2da7a3]::license::decode_hash
            (&local_49,anon_c9247e0b0208fc9c8c019285c3882aec_92_llvm_5798562142159169407,0x40);
  local_6a = local_49 == '\0';
  if ((bool)local_6a) {
    local_59 = local_38;
    uStack_51 = uStack_30;
    local_69 = local_48;
    uStack_65 = uStack_44;
    uStack_61 = uStack_40;
    uStack_5d = uStack_3c;
  }
  construct(param_1,param_2,param_3,param_4,&local_88,&local_6a);
  return param_1;
}


