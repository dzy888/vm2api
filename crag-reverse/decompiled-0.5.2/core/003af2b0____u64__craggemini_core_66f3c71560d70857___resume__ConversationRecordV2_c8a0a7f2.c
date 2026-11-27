// 003af2b0 <(u64,&craggemini_core[66f3c71560d70857]::resume::ConversationRecordV2),core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::max_by::fold<(u64,&craggemini_core[66f3c71560d70857]::resume::ConversationRecordV2),core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::max_by_key::compare<&craggemini_core[66f3c71560d70857]::resume::ConversationRecordV2,u64>>::{closure#0}>

/* <core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini_core[66f3c71560d70857]::resume::ConversationRecordV2>,
   <craggemini_core[66f3c71560d70857]::resume::SessionStore>::resolve_with_options::{closure#10}>,
   core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::max_by_key::key<&craggemini_core[66f3c71560d70857]::resume::ConversationRecordV2,
   u64, 
   <craggemini_core[66f3c71560d70857]::resume::SessionStore>::resolve_with_options::{closure#11}>::{closure#0}>
   as core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::fold::<(u64,
   &craggemini_core[66f3c71560d70857]::resume::ConversationRecordV2),
   core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::max_by::fold<(u64,
   &craggemini_core[66f3c71560d70857]::resume::ConversationRecordV2),
   core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::max_by_key::compare<&craggemini_core[66f3c71560d70857]::resume::ConversationRecordV2,
   u64>>::{closure#0}> */

undefined1  [16] __rustcall
<core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini_core[66f3c71560d70857]::resume::ConversationRecordV2>,<craggemini_core[66f3c71560d70857]::resume::SessionStore>::resolve_with_options::{closure#10}>,core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::max_by_key::key<&craggemini_core[66f3c71560d70857]::resume::ConversationRecordV2,u64,<craggemini_core[66f3c71560d70857]::resume::SessionStore>::resolve_with_options::{closure#11}>::{closure#0}>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
::fold::
<(u64,&craggemini_core[66f3c71560d70857]::resume::ConversationRecordV2),core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::max_by::fold<(u64,&craggemini_core[66f3c71560d70857]::resume::ConversationRecordV2),core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::max_by_key::compare<&craggemini_core[66f3c71560d70857]::resume::ConversationRecordV2,u64>>::_closure_0_>
          (longlong *param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  
  puVar4 = PTR_bcmp_00799020;
  lVar6 = *param_1;
  if (lVar6 != param_1[1]) {
    lVar1 = param_1[2];
    lVar2 = param_1[3];
    uVar7 = (ulonglong)(param_1[1] - lVar6) / 0x280;
    do {
      if ((((*(longlong *)(lVar6 + 0x218) != -1) &&
           (*(longlong *)(lVar6 + 0x228) == *(longlong *)(lVar1 + 0x10))) &&
          (iVar5 = (*(code *)puVar4)(), iVar5 == 0)) &&
         ((((*(longlong *)(lVar6 + 0x40) == 0 || (*(longlong *)(lVar2 + 0x10) == 0)) ||
           ((lVar3 = *(longlong *)(lVar2 + 0x18), lVar3 == 0 ||
            ((lVar3 == *(longlong *)(lVar6 + 0x40) && (iVar5 = (*(code *)puVar4)(), iVar5 == 0))))))
          && (param_2 <= *(ulonglong *)(lVar6 + 0x260))))) {
        param_3 = lVar6;
        param_2 = *(ulonglong *)(lVar6 + 0x260);
      }
      lVar6 = lVar6 + 0x280;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  auVar8._8_8_ = param_3;
  auVar8._0_8_ = param_2;
  return auVar8;
}


