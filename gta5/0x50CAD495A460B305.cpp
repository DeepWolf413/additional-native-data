// am_mp_armory_aircraft.ysc @ L263221
void func_4283()
{
  if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(524.4728f, 4750.653f, -69.996f, 15f) > 0)
  {
    FIRE::STOP_FIRE_IN_RANGE(524.4728f, 4750.653f, -69.996f, 15f);
  }
}