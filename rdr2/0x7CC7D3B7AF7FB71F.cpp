// rcm_beau_and_penelope12.ysc @ L25821
void func_859()
{
  int iVar0;

  AITRANSPORT::_0xBA8818212633500A(iLocal_170, 2, 1);
  AITRANSPORT::_0xDD0660C997DE94FD(iLocal_170, 0);
  if (!bLocal_2185)
  {
    PED::SET_GROUP_FORMATION(func_470(), 5);
    iVar0 = 0;
    while (iVar0 < 11)
    {
      PED::ADD_CUSTOM_FORMATION_LOCATION(func_470(), vLocal_1685[iVar0 /*3*/], iVar0);
      iVar0++;
    }
    PED::_0xD5BD1B5318A81994(func_470(), 0);
    PED::_0x8AFCCC0F18D70018(func_470(), 1);
    PED::SET_FORMATION_POSITIONS_TARGET_RADIUS(func_470(), 1.2f);
    PED::SET_GROUP_FORMATION_SPACING(func_470(), 1f, -1f, -1f);
    PED::_0x97C475212B327666(func_470(), 1);
    PED::_0x154B7E841AC7412F(func_470(), 0);
    PED::_0x8AFCCC0F18D70018(func_470(), 1);
    PED::_0xB05CC690CDE8A4A9(func_470(), 0f);
    PED::_0x478F6B9920446CE2(func_470(), 1);
    bLocal_2185 = true;
  }
}