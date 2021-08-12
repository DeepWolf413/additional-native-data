// braithwaites1.ysc @ L64876
void func_1436(var uParam0)
{
  if (!func_167(168))
  {
    if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_979[0], Local_141.f_27, true, 0))
    {
      iLocal_1825[1] = MAP::_BLIP_ADD_FOR_ENTITY(-399496385, Local_1429[2 /*9*/].f_7);
      MAP::_BLIP_SET_MODIFIER(iLocal_1825[1], joaat("BLIP_MODIFIER_TRAIN_MISSION"));
      iLocal_1837 = 0;
      func_47(0, 0);
      if (!PLAYER::_0xB16223CB7DA965F0(PLAYER::PLAYER_ID()))
      {
        func_1884(&(uParam0->f_5310), func_1883(105), 0, -1, 0, 0);
      }
      VEHICLE::_0xCFE122EC635CC2B2(Local_1429[2 /*9*/].f_7, "DANGER", 0, 0);
      func_413(168);
    }
  }
  else if (!func_167(169))
  {
    if (!ENTITY::IS_ENTITY_DEAD(iLocal_979[0]) && ENTITY::IS_ENTITY_IN_VOLUME(iLocal_979[0], Local_141.f_28, true, 0))
    {
      MAP::REMOVE_BLIP(&(iLocal_1825[1]));
      func_1884(&(uParam0->f_5310), func_1883(106), 0, -1, 0, 0);
      VEHICLE::_0x6703872EC09BC158(Local_1429[2 /*9*/].f_7, 0);
      func_413(169);
    }
  }
  else if (func_914(Global_35, Local_1429[2 /*9*/].f_7, 1, 1) >= 500f && ENTITY::IS_ENTITY_OCCLUDED(Local_1429[2 /*9*/].f_7))
  {
    Local_1429[2 /*9*/].f_6 = 12;
  }
}