// 00182670 clone

/* <std[6c98fd8553dbae28]::sync::mpmc::Sender<(serde_json[dc3825464c436029]::value::Value, bool,
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)> as
   core[c0acaeba6ab4c2e0]::clone::Clone>::clone */

void __rustcall
<std[6c98fd8553dbae28]::sync::mpmc::Sender<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>as_core[c0acaeba6ab4c2e0]::clone::Clone>
::clone(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[1];
  if (*param_1 == 0) {
    LOCK();
    plVar1 = (longlong *)(lVar3 + 0x200);
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 != 0 && SCARRY8(lVar2,1) == *plVar1 < 0) {
      return;
    }
  }
  else {
    if ((int)*param_1 != 1) goto LAB_0018269e;
    LOCK();
    plVar1 = (longlong *)(lVar3 + 0x180);
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 != 0 && SCARRY8(lVar2,1) == *plVar1 < 0) {
      return;
    }
  }
  do {
    (*(code *)PTR_abort_00219ea8)();
LAB_0018269e:
    LOCK();
    plVar1 = (longlong *)(lVar3 + 0x70);
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  } while (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0);
  return;
}


