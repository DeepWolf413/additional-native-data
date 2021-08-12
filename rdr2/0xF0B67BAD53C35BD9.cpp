// beat_kidnap_victim.ysc @ L5203
void func_152()
{
  if (!bLocal_495)
  {
    if (PED::IS_PED_DEAD_OR_DYING(uLocal_392[0], true) && PED::_IS_PED_HOGTIED(uLocal_392[1]))
    {
      if (func_315())
      {
        func_97(uLocal_392[1], 1);
        LAW::_0xF0B67BAD53C35BD9(uLocal_392[1], Global_35, uLocal_392[1], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), joaat("CRIME_KIDNAPPING"));
        func_26(0, 0);
        bLocal_503 = true;
        bLocal_488 = true;
        bLocal_495 = true;
      }
    }
  }
}