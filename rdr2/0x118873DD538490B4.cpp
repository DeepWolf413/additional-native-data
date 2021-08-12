// rcm_here_kitty_kitty4.ysc @ L8947
void func_299(var uParam0)
{
  int iVar0;

  func_290(uParam0);
  EVENT::_REMOVE_ALL_SHOCKING_EVENTS_OF_TYPE(joaat("EVENT_SHOCKING_DEAD_BODY"), true);
  EVENT::_REMOVE_ALL_SHOCKING_EVENTS_OF_TYPE(joaat("EVENT_SHOCKING_BEAT_DANGEROUS"), true);
  EVENT::_REMOVE_ALL_SHOCKING_EVENTS_OF_TYPE(joaat("EVENT_SHOT_FIRED"), false);
  EVENT::_REMOVE_ALL_SHOCKING_EVENTS_IN_AREA(vLocal_722, 200f, true);
  func_23(&iLocal_330);
  iVar0 = 0;
  while (iVar0 < 3)
  {
    if (iVar0 != 0 && iVar0 != 1)
    {
      if (!ENTITY::IS_ENTITY_DEAD(Local_429[iVar0 /*65*/]))
      {
        TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_429[iVar0 /*65*/], false, true);
      }
      func_169(&(Local_429[iVar0 /*65*/]), 0, 1, 0);
    }
    else if (!ENTITY::IS_ENTITY_DEAD(Local_429[iVar0 /*65*/]))
    {
      func_643(iVar0);
    }
    iVar0++;
  }
  func_169(&(Local_393[1 /*5*/]), 0, 0, 1);
  func_398(0);
  func_392(uParam0, 0, 0, 0);
  func_266(&uLocal_647);
}