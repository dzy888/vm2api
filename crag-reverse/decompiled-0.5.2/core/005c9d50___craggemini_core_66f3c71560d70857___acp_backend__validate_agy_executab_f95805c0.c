// 005c9d50 <craggemini_core[66f3c71560d70857]::acp_backend::validate_agy_executable::{closure#3}>

/* <core[c0acaeba6ab4c2e0]::slice::iter::Iter<alloc[12e961f32105355]::string::String> as
   core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::any::<craggemini_core[66f3c71560d70857]::acp_backend::validate_agy_executable::{closure#3}>
    */

undefined8 __rustcall
<core[c0acaeba6ab4c2e0]::slice::iter::Iter<alloc[12e961f32105355]::string::String>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
::any::<craggemini_core[66f3c71560d70857]::acp_backend::validate_agy_executable::_closure_3_>
          (longlong *param_1,longlong param_2,ulonglong param_3)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar8 = *param_1;
  lVar3 = param_1[1];
  if (lVar8 != lVar3) {
    if (param_3 < 0x10) {
      do {
        lVar7 = lVar8 + 0x18;
        if (*(ulonglong *)(lVar8 + 0x10) == param_3) {
          uVar6 = 0;
          do {
            if (param_3 == uVar6) {
              uVar5 = 1;
              goto LAB_005c9e13;
            }
            bVar2 = *(byte *)(*(longlong *)(lVar8 + 8) + uVar6);
            pbVar1 = (byte *)(param_2 + uVar6);
            uVar6 = uVar6 + 1;
          } while ((byte)(((byte)(bVar2 + 0xbf) < 0x1a) << 5 | bVar2) ==
                   (byte)(((byte)(*pbVar1 + 0xbf) < 0x1a) << 5 | *pbVar1));
        }
        lVar8 = lVar7;
      } while (lVar7 != lVar3);
      uVar5 = 0;
LAB_005c9e13:
      *param_1 = lVar7;
      return uVar5;
    }
    do {
      lVar7 = lVar8 + 0x18;
      *param_1 = lVar7;
      if ((*(ulonglong *)(lVar8 + 0x10) == param_3) &&
         (cVar4 = <[u8]>::eq_ignore_ascii_case_chunks::<16:usize>
                            (*(undefined8 *)(lVar8 + 8),param_3,param_2,param_3), cVar4 != '\0')) {
        return 1;
      }
      lVar8 = lVar7;
    } while (lVar7 != lVar3);
  }
  return 0;
}


