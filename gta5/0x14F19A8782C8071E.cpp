// minute1.ysc @ L48855
void func_505()
{
  if (iLocal_541 == 0 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1987.803f, 3055.128f, 45.2153f, 1986.587f, 3053.184f, 48.21519f, 1.5f, false, true, 0))
  {
    PED::SET_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND(true);
    if (PED::GET_CLOSEST_PED(1983.41f, 3054.88f, 47.01f, 3f, true, true, &iLocal_540, false, false, -1) && func_36(iLocal_540))
    {
      if (ENTITY::GET_ENTITY_MODEL(iLocal_540) == joaat("ig_janet"))
      {
        func_501();
        func_26(&uLocal_174, 8, iLocal_540, "JANET", 0, 1);
        func_338(&uLocal_174, "MIN1AUD", "MIN1_BANNED", 3, 0, 0);
      }
      iLocal_541 = 1;
    }
  }
}