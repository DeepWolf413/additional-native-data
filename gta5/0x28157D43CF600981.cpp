// act_cinema.ysc @ L1123
void func_1()
{
  if (Local_315[iLocal_220 /*2*/].f_1 == 1)
  {
    iLocal_221 = 1;
    if (!Local_280.f_34)
    {
      if (!func_2(Local_177.f_22, 0f, 0f, 0f, 0))
      {
        PED::SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(Local_177.f_22, 15f, 5);
        Local_280.f_34 = 1;
      }
      else
      {
        Local_280.f_34 = 1;
      }
    }
  }
  iLocal_220++;
  if (iLocal_220 >= 32)
  {
    iLocal_220 = 0;
    if (Local_280.f_34 == 1)
    {
      if (!iLocal_221)
      {
        Local_280.f_34 = 0;
      }
    }
    iLocal_221 = 0;
  }
}