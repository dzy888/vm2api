// 005cfaa0 cleanup_turn

/* <craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::cleanup_turn */

void __rustcall
<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::cleanup_turn
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          longlong param_5)

{
  cancel_pending_rpc(param_1,param_4);
  remove_session_listener(param_1,param_2,param_3);
  if (param_5 == 0) {
    return;
  }
  <craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>::detach_turn_listener(param_5);
  return;
}


