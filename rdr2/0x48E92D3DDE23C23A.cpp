// act_caunc_rustling_invite.ysc @ L2802
bool func_55()
{
  if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
  {
    if (!func_156(PLAYER::PLAYER_PED_ID(), 501393341))
    {
      TASK::TASK_DISMOUNT_ANIMAL(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0);
    }
    return false;
  }
  return true;
}