// act_cinema.ysc @ L96409
int func_718(struct<3> Param0, float fParam3)
{
  int iVar0;
  
  if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
  {
    return 0;
  }
  else
  {
    func_64();
    iVar0 = 0;
    while (iVar0 < 3)
    {
      if (Global_2405077.f_686[iVar0] == -1 && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
      {
        Global_2405077.f_686[iVar0] = NETWORK::NETWORK_ADD_ENTITY_DISPLAYED_BOUNDARIES(Param0 - Vector(fParam3, fParam3, fParam3), Param0 + Vector(fParam3, fParam3, fParam3));
        Global_2405077.f_690[iVar0] = SCRIPT::GET_ID_OF_THIS_THREAD();
        Global_2405077.f_698 = Global_2405077.f_686[iVar0];
        return 1;
      }
      iVar0++;
    }
  }
  return 0;
}