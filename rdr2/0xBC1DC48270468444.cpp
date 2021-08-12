// marston1.ysc @ L53996
void func_1345(bool bParam0)
{
  bool bVar0;
  int iVar1;
  bool bVar2;

  if (!func_832(*bParam0))
  {
    ENTITY::SET_ENTITY_VELOCITY(*bParam0, 0f, 0f, 0f);
    VEHICLE::BRING_VEHICLE_TO_HALT(*bParam0, 0.1f, 1, false);
    bVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*bParam0, -1);
    if (func_455(bVar0, iLocal_961) && bVar0 != Global_35)
    {
    }
    iVar1 = 0;
    while (iVar1 < 6)
    {
      bVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(*bParam0, iVar1);
      if (func_455(bVar2, iLocal_961))
      {
        PED::_0xBC1DC48270468444(bVar2);
      }
      iVar1++;
    }
  }
}