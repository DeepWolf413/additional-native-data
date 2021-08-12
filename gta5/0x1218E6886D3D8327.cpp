// gb_security_van.ysc @ L703
void func_12()
{
  bool bVar0;
  struct<3> Var1;
  
  bVar0 = false;
  while (bVar0 < 3)
  {
    if (func_2((2 + bVar0)))
    {
      if (func_17(bVar0))
      {
        if (func_16(bVar0))
        {
          if (!ENTITY::IS_ENTITY_STATIC(func_15(bVar0)))
          {
            Var1 = { ENTITY::GET_ENTITY_COORDS(func_15(bVar0), false) - ENTITY::GET_ENTITY_COORDS(func_14(bVar0), false) };
            Var1 = { func_13(Var1) };
            Var1.x = (Var1.x * 2.5f);
            Var1.f_1 = (Var1.f_1 * 2.5f);
            Var1.f_2 = (Var1.f_2 * 2.5f);
            ENTITY::APPLY_FORCE_TO_ENTITY(func_15(bVar0), 1, Var1, 0f, 0f, 0f, 0, false, true, true, false, true);
          }
        }
      }
    }
    bVar0++;
  }
}