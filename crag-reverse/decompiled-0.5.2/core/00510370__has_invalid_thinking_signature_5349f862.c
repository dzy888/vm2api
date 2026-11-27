// 00510370 has_invalid_thinking_signature

/* craggemini_core[66f3c71560d70857]::protocol::has_invalid_thinking_signature */

undefined4 __rustcall
craggemini_core[66f3c71560d70857]::protocol::has_invalid_thinking_signature
          (undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char local_98 [24];
  undefined1 local_80 [104];
  
  if (param_2 < 0x23) {
    if (param_2 != 0x22) goto LAB_00510438;
    iVar2 = (*(code *)PTR_bcmp_00799020)(param_4,0x22);
  }
  else {
    (*(code *)PTR_new_00799a18)("thinking.signature: Field required",param_2,0x22);
    <core[c0acaeba6ab4c2e0]::str::pattern::StrSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
    ::next_match(local_98,local_80);
    if (local_98[0] != '\0') {
      return 1;
    }
    if (0x27 < param_2) {
      (*(code *)PTR_new_00799a18)("Invalid `signature` in `thinking` block",param_2,0x27);
      <core[c0acaeba6ab4c2e0]::str::pattern::StrSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
      ::next_match(local_98,local_80);
      if (local_98[0] != '\0') {
        return 1;
      }
      goto LAB_00510438;
    }
    if (param_2 != 0x27) goto LAB_00510438;
    iVar2 = (*(code *)PTR_bcmp_00799020)();
  }
  if (iVar2 == 0) {
    return 1;
  }
LAB_00510438:
  cVar1 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                    ("Corrupted thought signature",0x1b,param_1,param_2);
  if (cVar1 == '\0') {
    uVar3 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                      ("INVALID_THINKING_SIGNATURE",0x1a,param_1,param_2);
    return uVar3;
  }
  return 1;
}


