// act_hunting_2.ysc @ L21122
void func_570()
{
  int iVar0;
  int iVar1;

  iVar0 = 3;
  while (iVar0 <= 9)
  {
    if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_307[iVar0]))
    {
      if (ENTITY::GET_ENTITY_SPEED(Local_15.f_307[iVar0]) > 0.1f)
      {
        if (!func_204(&(Local_15.f_569[iVar1 /*3*/])))
        {
          func_218(&(Local_15.f_569[iVar1 /*3*/]));
        }
        if (func_219(&(Local_15.f_569[iVar1 /*3*/])) > 3f)
        {
          MAP::_TRIGGER_SONAR_BLIP_2(729220490, Local_15.f_307[iVar0]);
          func_218(&(Local_15.f_569[iVar1 /*3*/]));
        }
      }
      iVar1++;
    }
    iVar0++;
  }
}