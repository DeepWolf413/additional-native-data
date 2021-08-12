// am_imp_exp.ysc @ L8276
void func_189(int iParam0, int iParam1, int iParam2)
{
  int iVar0;
  int iVar1;
  int iVar2;
  var uVar3;
  
  HUD::GET_HUD_COLOUR(iParam2, &iVar0, &iVar1, &iVar2, &uVar3);
  if (iParam1 == 0)
  {
  }
  VEHICLE::TRACK_VEHICLE_VISIBILITY(iParam0);
  if (func_14(PLAYER::PLAYER_ID(), 1, 1))
  {
    if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
    {
      if (func_190(iParam0) == 0)
      {
        if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, false))
        {
          if (VEHICLE::IS_VEHICLE_VISIBLE(iParam0))
          {
            GRAPHICS::ADD_ENTITY_ICON(iParam0, "MP_Arrow");
            GRAPHICS::SET_ENTITY_ICON_COLOR(iParam0, iVar0, iVar1, iVar2, 190);
            GRAPHICS::SET_ENTITY_ICON_VISIBILITY(iParam0, true);
          }
        }
      }
    }
  }
}