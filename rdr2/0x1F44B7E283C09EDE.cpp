// ambush_exc_lookout_attack.ysc @ L4197
void func_170()
{
  int iVar0;

  if (!func_135(&Local_274, 2048))
  {
    if (ENTITY::GET_ENTITY_HEALTH(Global_35) < 50)
    {
      iVar0 = 0;
      while (iVar0 <= 4)
      {
        if (func_61(Local_15[iVar0], 0, 0))
        {
          PED::_0x1F44B7E283C09EDE(Local_15[iVar0], 30f, 4000);
        }
        iVar0++;
      }
      func_239(&Local_274, 2048);
    }
  }
}