// am_mp_smpl_interior_ext.ysc @ L304850
int func_5078()
{
  struct<4> Var0;
  
  if (SCRIPT::HAS_SCRIPT_LOADED("AM_MP_SMPL_INTERIOR_INT"))
  {
    if (Local_222.f_5.f_3 || (func_4411(Local_222.f_1, Local_707.f_3) && !func_361()))
    {
      Var0 = Local_222.f_1;
      Var0.f_1 = Local_707.f_3;
      Var0.f_3 = func_5080();
      if (!Local_222.f_5.f_3)
      {
        Var0.f_2 = func_5079();
      }
      else
      {
        Var0.f_2 = -1;
      }
      if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_SMPL_INTERIOR_INT", Var0.f_2, true, 0) && MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(2512) > 0)
      {
        SYSTEM::START_NEW_SCRIPT_WITH_ARGS("AM_MP_SMPL_INTERIOR_INT", &Var0, 4, 2512);
        SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("AM_MP_SMPL_INTERIOR_INT");
      }
      return 1;
    }
  }
  return 0;
}