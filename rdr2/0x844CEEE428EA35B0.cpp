// dominoes_sp.ysc @ L22808
void func_696(var uParam0)
{
  int iVar0;

  if (!func_511(uParam0))
  {
    return;
  }
  iVar0 = func_153(uParam0);
  uParam0->f_18.f_21 = TASK::_0x844CEEE428EA35B0(iVar0, "CLIP_PHASE");
  TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iVar0, "X", uParam0->f_18.f_5);
  TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iVar0, "Y", uParam0->f_18.f_6);
  TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iVar0, "ANGLE_OF_PIECE", uParam0->f_18.f_10);
  TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iVar0, "RACK_TILE_INDEX", BUILTIN::TO_FLOAT(uParam0->f_18.f_22));
  TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iVar0, "ANIM_VARIATION", uParam0->f_18.f_11);
  TASK::SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(iVar0, "CHANGE_IDLE", uParam0->f_18.f_1);
  TASK::SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(iVar0, "FIRSTPERSON_IDLE", uParam0->f_18.f_2);
  TASK::SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(iVar0, "TILE_PUT_BACK", uParam0->f_18.f_3);
  TASK::SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(iVar0, "PEEK_AT_TILES", uParam0->f_18.f_4);
  if (!func_271(uParam0->f_18.f_7))
  {
    TASK::_SET_TASK_MOVE_NETWORK_SIGNAL_VECTOR(iVar0, "HAND_POS", uParam0->f_18.f_7);
  }
  if (!uParam0->f_2)
  {
    PED::_0x2208438012482A1A(iVar0, false, false);
  }
  uParam0->f_18 = 1;
}