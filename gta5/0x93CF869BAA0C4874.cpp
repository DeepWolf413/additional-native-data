// act_cinema.ysc @ L3221
void func_64()
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 < 3)
  {
    if (SCRIPT::IS_THREAD_ACTIVE(Global_2405077.f_690[iVar0]))
    {
      if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405077.f_690[iVar0])
      {
        if (!Global_2405077.f_686[iVar0] == -1)
        {
          if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2405077.f_686[iVar0]))
          {
            NETWORK::NETWORK_REMOVE_ENTITY_AREA(Global_2405077.f_686[iVar0]);
            Global_2405077.f_686[iVar0] = -1;
          }
          else
          {
            Global_2405077.f_686[iVar0] = -1;
          }
        }
      }
    }
    else if (!Global_2405077.f_686[iVar0] == -1)
    {
      Global_2405077.f_686[iVar0] = -1;
    }
    iVar0++;
  }
}