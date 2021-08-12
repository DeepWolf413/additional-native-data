// fm_mission_controller_2020.ysc @ L742890
void func_13702()
{
  int iVar0;
  bool bVar1;
  
  iVar0 = 21;
  if (Global_4456448.f_85976 != 0)
  {
    iVar0 = Global_4456448.f_85976;
  }
  if (Global_2453903.f_6252)
  {
    if (func_13713(iVar0))
    {
      func_13711(&bVar1);
      STREAMING::REQUEST_NAMED_PTFX_ASSET(Local_27041.f_1);
      func_13710();
      if ((MISC::GET_GAME_TIMER() - Local_27041) > 600)
      {
        if (((FIRE::IS_ENTITY_ON_FIRE(iLocal_22078) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iLocal_22078)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(iLocal_22078)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iLocal_22078))
        {
          func_13704(iVar0, 0.5f, bVar1);
          return;
        }
        if (func_13703())
        {
          func_13704(iVar0, 1f, bVar1);
        }
      }
    }
  }
}