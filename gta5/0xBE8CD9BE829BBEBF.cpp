// am_casino_peds.ysc @ L320707
void func_4527(var uParam0, var uParam1)
{
  bool bVar0;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  var uVar5;
  var uVar6;
  var uVar7;
  
  if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
  {
    if (func_2131(uParam0->f_22.f_94, 0))
    {
      HUD::CLEAR_HELP(true);
      func_1447(&(uParam0->f_22.f_94));
    }
  }
  func_4528(0);
  if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
  {
    if (func_15(PLAYER::PLAYER_PED_ID()) && ENTITY::_GET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), &bVar0, &bVar1, &bVar2, &bVar3, &bVar4, &uVar5, &uVar6, &uVar7))
    {
      if ((((!bVar0 || !bVar1) || !bVar2) || !bVar3) || !bVar4)
      {
        ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), true, true, true, true, true, false, false, false);
        VEHICLE::_SET_DISABLE_VEHICLE_UNK_2(true);
      }
    }
  }
}