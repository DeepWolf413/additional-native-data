// gb_casino_heist.ysc @ L21877
void func_370(bool bParam0, int iParam1)
{
  switch (func_70())
  {
    case 90:
      switch (bParam0)
      {
        case 0:
          VEHICLE::SET_VEHICLE_SIREN(iParam1, true);
          VEHICLE::SET_VEHICLE_HAS_MUTED_SIRENS(iParam1, true);
          VEHICLE::SET_VEHICLE_LIGHTS(iParam1, 2);
          break;
        
        case 1:
          ENTITY::FREEZE_ENTITY_POSITION(iParam1, true);
          break;
      }
      break;
  }
}