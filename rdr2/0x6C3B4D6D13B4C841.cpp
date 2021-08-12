// beat_drunk_dueler.ysc @ L803
void func_20()
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 < 1)
  {
    iLocal_656[iVar0] = func_91(Local_409[iVar0 /*32*/].f_1, &(Local_409[iVar0 /*32*/]), Local_211.f_51 + Local_409[iVar0 /*32*/].f_6, Local_409[iVar0 /*32*/].f_9, 1, 0, 1, 0, 1);
    iVar0++;
  }
  if (func_92(iLocal_656[0], 0, 1))
  {
    WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_656[0], true, true);
    PED::SET_PED_CAN_BE_TARGETTED(iLocal_656[0], false);
    WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_656[0], func_93(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 200, false, true, 2, false, 0.5f, 1f, 752097756, false, 0f, false);
    func_95(iLocal_656[0], func_94(joaat("REWARD_BEAT_SMALL"), 0, -1));
    PED::SET_PED_CAN_ARM_IK(iLocal_656[0], true);
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_656[0], true);
    PED::_0x24C82EF607105FAA(iLocal_656[0], joaat("AGGRESSIVE"));
    PED::_0x06D26A96CA1BCA75(iLocal_656[0], 10, 1f, 0);
    PED::_0xA1EB5D029E0191D3(iLocal_656[0], 10, 0f);
  }
}