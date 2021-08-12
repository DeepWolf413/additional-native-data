// abigail2_1.ysc @ L54165
void func_1415()
{
  char* sVar0;

  if (PED::IS_PED_RAGDOLL(Global_35))
  {
    return;
  }
  if (CAM::_0xA24C1D341C6E0D53(1, 1, 1))
  {
    return;
  }
  if (!func_1107(1))
  {
    return;
  }
  sVar0 = "outfit_change_unarmed";
  switch (Global_1946804.f_859)
  {
    case 1:
      sVar0 = "outfit_change_longarms";
      break;
    case 0:
      sVar0 = "outfit_change_offhand";
      break;
    case 2:
      sVar0 = "outfit_change_unarmed";
      break;
  }
  TASK::TASK_PLAY_ANIM(Global_35, func_1878(), sVar0, 8f, -8f, -1, 67108880, 0f, false, 0, false, "Satchel_and_ik_hand_helpers_filter", false);
  func_1572(1);
  STREAMING::REMOVE_ANIM_DICT(func_1878());
}