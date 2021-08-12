// beat_rally_dispute.ysc @ L1925
void func_62()
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 <= 3)
  {
    if (Local_226[iVar0 /*32*/].f_1 != 0)
    {
      func_161(uLocal_385[iVar0], 0);
      WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_385[iVar0], true, true);
      func_162(uLocal_385[iVar0], joaat("GROUP_PISTOL"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
      if (iVar0 != 0)
      {
        WEAPON::_GIVE_WEAPON_TO_PED_2(uLocal_385[iVar0], joaat("WEAPON_MELEE_TORCH_CROWD"), 1, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
      }
      func_163(uLocal_385[iVar0], &(Local_226[iVar0 /*32*/].f_23), 0);
      PED::SET_PED_COMBAT_ABILITY(uLocal_385[iVar0], 0);
      PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_385[iVar0], joaat("REL_CRIMINALS"));
      PED::SET_PED_CONFIG_FLAG(uLocal_385[iVar0], 6, false);
      PED::SET_PED_CONFIG_FLAG(uLocal_385[iVar0], 494, true);
    }
    iVar0++;
  }
  func_164(uLocal_385[0], &Local_32, 0);
  func_164(uLocal_385[1], &Local_32, 0);
  func_164(uLocal_385[2], &Local_32, 0);
}