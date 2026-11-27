// 00763050 from

/* <std[6c98fd8553dbae28]::thread::thread::thread_name_string::ThreadNameString as
   core[c0acaeba6ab4c2e0]::convert::From<alloc[12e961f32105355]::string::String>>::from */

void __rustcall
<std[6c98fd8553dbae28]::thread::thread::thread_name_string::ThreadNameString_as_core[c0acaeba6ab4c2e0]::convert::From<alloc[12e961f32105355]::string::String>>
::from(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  lVar1 = *param_1;
  local_38 = param_1[1];
  local_30 = param_1[2];
  local_40 = lVar1;
  if (local_30 < 0x10) {
    if (local_30 != 0) {
      uVar4 = 0;
      do {
        if (*(char *)(local_38 + uVar4) == '\0') goto LAB_007630c8;
        uVar4 = uVar4 + 1;
      } while (local_30 != uVar4);
    }
  }
  else {
    uVar4 = local_30;
    uVar3 = (*(code *)PTR_memchr_aligned_00799490)();
    if ((uVar3 & 1) != 0) {
LAB_007630c8:
      if (lVar1 != -1) {
        local_28 = uVar4;
        (*(code *)PTR_unwrap_failed_00799028)
                  (&PTR_<alloc[12e961f32105355]::ffi::c_str::NulError>_007966f8,&local_40,
                   &PTR_s__rustc_48a229ceaefd4985c50990b14_007971d8);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      return;
    }
  }
  (*(code *)PTR__from_vec_unchecked_0079af98)();
  return;
}


