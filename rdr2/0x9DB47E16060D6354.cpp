// beat_animal_attack.ysc @ L2706
bool func_63()
{
  if (((iLocal_228 == 2 && iLocal_1415 == 16) && PED::IS_PED_ON_MOUNT(uLocal_1389[0])) && EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), ENTITY::GET_ENTITY_COORDS(uLocal_1389[0], true, false), 25f))
  {
    return true;
  }
  return false;
}