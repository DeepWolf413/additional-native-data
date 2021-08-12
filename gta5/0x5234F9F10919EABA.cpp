// carsteal2.ysc @ L55885
int func_511(struct<3> Param0)
{
  int iVar0;
  struct<3> Var1;
  
  if (CAM::DOES_CAM_EXIST(CAM::GET_RENDERING_CAM()))
  {
    if (CAM::IS_CAM_RENDERING(CAM::GET_RENDERING_CAM()))
    {
      Var1 = { CAM::GET_CAM_COORD(CAM::GET_RENDERING_CAM()) };
      iVar0 = 0;
      while (iVar0 < Local_69)
      {
        if (func_512(Var1, Param0, Local_69[iVar0 /*13*/][0 /*3*/], Local_69[iVar0 /*13*/][1 /*3*/], Local_69[iVar0 /*13*/][2 /*3*/], Local_69[iVar0 /*13*/][3 /*3*/]))
        {
          return 1;
        }
        iVar0++;
      }
    }
  }
  return 0;
}