// agency_heist3a.ysc @ L124628
void func_910()
{
  switch (iLocal_4929)
  {
    case 0:
      if (((func_598(iLocal_5084[0], 119.9168f, -740.3616f, 253.1524f, "V_FIB03_IT3_hall", "v_fib03") || func_598(iLocal_5084[0], 119.9168f, -740.3616f, 253.1524f, "V_FIB03_IT3_cor1", "v_fib03")) || func_598(iLocal_5084[0], 119.9168f, -740.3616f, 253.1524f, "V_FIB03_IT3_open", "v_fib03")) || func_598(iLocal_5084[0], 135.3519f, -731.3309f, 249.5521f, "V_FIB02_IT2_elev", "v_fib02"))
      {
        fLocal_4983 = (fLocal_4983 + (MISC::GET_FRAME_TIME() * 0.1f));
        if (fLocal_4983 > fLocal_4985)
        {
          fLocal_4983 = fLocal_4985;
        }
        fLocal_4984 = (fLocal_4984 + (MISC::GET_FRAME_TIME() * 1f));
        if (fLocal_4984 > fLocal_4986)
        {
          fLocal_4984 = fLocal_4986;
        }
        PED::_0x110F526AB784111F(iLocal_5084[0], fLocal_4983);
        PED::SET_PED_ENVEFF_SCALE(iLocal_5084[0], fLocal_4984);
        PED::SET_PED_ENVEFF_COLOR_MODULATOR(iLocal_5084[0], 87, 81, 68);
        PED::SET_ENABLE_PED_ENVEFF_SCALE(iLocal_5084[0], true);
        if (fLocal_4983 == fLocal_4985 && fLocal_4984 == fLocal_4986)
        {
          iLocal_4929++;
        }
      }
      break;
    
    case 1:
      break;
  }
}