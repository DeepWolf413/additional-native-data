// franklin0.ysc @ L121259
void func_917()
{
  if (!bLocal_1504)
  {
    PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_1159, 0);
    if (PED::CAN_KNOCK_PED_OFF_VEHICLE(Local_1159))
    {
      PED::KNOCK_PED_OFF_VEHICLE(Local_1159);
      iLocal_1505 = 0;
    }
    else
    {
      iLocal_1505 = 1;
    }
    if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1367[1], false))
    {
      ENTITY::SET_ENTITY_PROOFS(iLocal_1367[1], false, false, false, false, false, false, false, false);
      VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(iLocal_1367[1], false);
      VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(iLocal_1367[1], true);
      VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(iLocal_1367[1], true);
    }
    RECORDING::_0x293220DA1B46CEBC(3f, 2f, 3);
    iLocal_1818 = MISC::GET_GAME_TIMER();
    bLocal_1504 = true;
  }
}